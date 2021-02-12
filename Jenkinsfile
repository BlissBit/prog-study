def devBranch = "develop"

pipeline
{
	agent none
	options
	{
		buildDiscarder(logRotator(numToKeepStr: getKeepBuilds()))
		timestamps ()
	}
	stages
	{
		stage ('Build Prog Study')
		{
			parallel
			{
				stage('Windows x64')
				{
					agent
					{
						label 'win-build-node'
					}
					stages
					{
						stage('Build Win64 Release')
						{
							steps
							{
								buildWithParams()
							}
						}
						stage('cleanup')
						{
							steps
							{
								deleteDir()
							}
						}
					}
				}
			}
		}
	}
}


def buildWithParams()
{
	def typeSuffix = '_release'
	def type = 'Release'
	def platform = 'amd64'
	def platformSuffix = '_X64'
	def dirName = 'build' + platformSuffix + typeSuffix

	bat """
	call "%VS2019_BUILD_TOOLS%/VC/Auxiliary/Build/vcvarsall.bat" ${platform}
	mkdir ${dirName}
	"%VS2019_BUILD_TOOLS%/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" ^
	-DCMAKE_BUILD_TYPE="${type}" ^
	-S . -B ${dirName} -G "Ninja"
	"%VS2019_BUILD_TOOLS%/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" ^
	--build ${dirName}
	"""
}