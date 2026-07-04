/* Runtime dump - BSPlatform
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPlatform : NSObject
{
    NSString * _productVersion;
    NSString * _productBuildVersion;
    NSString * _productHardwareModel;
    NSString * _productType;
    NSString * _productClass;
    NSString * _uniqueDeviceIdentifier;
    NSString * _localizedProductName;
    char _hasGasGauge;
    char _isInternalInstall;
    char _isMultiCore;
}

@property (readonly, copy, nonatomic) NSString * productVersion;
@property (readonly, copy, nonatomic) NSString * productBuildVersion;
@property (readonly, copy, nonatomic) NSString * productType;
@property (readonly, copy, nonatomic) NSString * productHardwareModel;
@property (readonly, copy, nonatomic) NSString * productClass;
@property (readonly, copy, nonatomic) NSString * localizedProductName;
@property (readonly, copy, nonatomic) NSString * uniqueDeviceIdentifier;
@property (readonly, nonatomic) char internalInstall;
@property (readonly, nonatomic) char multiCore;
@property (readonly, nonatomic) char hasGasGauge;

+ (BSPlatform *)sharedInstance;

- (void)dealloc;
- (BSPlatform *)init;
- (NSString *)uniqueDeviceIdentifier;
- (NSString *)productType;
- (NSString *)productHardwareModel;
- (NSString *)productClass;
- (NSString *)localizedProductName;
- (char)hasGasGauge;
- (char)isMultiCore;
- (NSString *)productVersion;
- (NSString *)productBuildVersion;
- (char)isInternalInstall;

@end
