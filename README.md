# Godot Extention example

Demo of integration WebKit into Godot Native module


## MacOS development

### Install
Install [Vulkan SDK](https://sdk.lunarg.com/sdk/download/latest/mac/vulkan-sdk.dmg), then

```sh
brew install scons
```
Copy the `webkitdemo` into the Godot `modules` folder

### Build Godot
```sh
scons platform=macos arch=x86_64
scons platform=macos arch=arm64
```

## Extras

### Clean build cache

```sh
rm -rf bin
rm -rf .scon*
```