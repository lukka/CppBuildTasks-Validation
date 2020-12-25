# Content of the repository: **run-cmake** and **run-vcpkg** actions and tasks validation workflows.

This repository contains [GitHub workflows](https://github.com/lukka/CppBuildTasks-Validation/actions) and [Azure Pipeline definitions](https://dev.azure.com/CppBuild/CppBuildTasks/_build?view=folders) (in the yaml format) used for validation of the actions and the tasks provided by:
  - the [**run-vcpkg** GitHub action](https://github.com/marketplace/actions/run-vcpkg);
  - the [**run-cmake** GitHub action](https://github.com/marketplace/actions/run-cmake);
  - the [**run-cmake** and the **run-vcpkg** tasks provided by CppBuildTasks](https://marketplace.visualstudio.com/items?itemName=lucappa.cmake-ninja-vcpkg-tasks) extension for [Azure DevOps](https://azure.microsoft.com/en-us/services/devops/).

Essentially the yaml definitions exercise the actions and the tasks to verify the successful exection in different scenarios (e.g. platforms, toolsets, environment).

# License
All the content in this repository is licensed under the [MIT License](LICENSE.txt).

Copyright (c) 2019-2020-2021 Luca Cappa
