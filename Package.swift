// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DRSDKINSPM",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "DigitalReefSDK",
            targets: ["DigitalReefSDK"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(name: "DigitalReefSDK",
                      path: "DigitalReefSDK.xcframework")
    ]
)
