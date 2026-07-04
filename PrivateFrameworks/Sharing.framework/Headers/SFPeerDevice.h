/* Runtime dump - SFPeerDevice
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPeerDevice : NSObject <NSSecureCoding>
{
    char _defaultPairedDevice;
    NSString * _uniqueID;
    NSString * _modelIdentifier;
    NSString * _productName;
    NSString * _productVersion;
    NSString * _productBuildVersion;
    NSString * _name;
    NSString * _deviceColor;
    NSString * _enclosureColor;
}

@property (copy) NSString * uniqueID;
@property (copy) NSString * modelIdentifier;
@property (copy) NSString * productName;
@property (copy) NSString * productVersion;
@property (copy) NSString * productBuildVersion;
@property (copy) NSString * name;
@property (copy) NSString * deviceColor;
@property (copy) NSString * enclosureColor;
@property char defaultPairedDevice;

+ (char)supportsSecureCoding;

- (void)setProductName:(NSString *)arg0;
- (void)setProductVersion:(NSString *)arg0;
- (void)setUniqueID:(NSString *)arg0;
- (void)dealloc;
- (SFPeerDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)productName;
- (NSString *)productVersion;
- (NSString *)modelIdentifier;
- (char)isDefaultPairedDevice;
- (NSString *)enclosureColor;
- (NSString *)productBuildVersion;
- (NSString *)deviceColor;
- (void)setDeviceColor:(NSString *)arg0;
- (void)setModelIdentifier:(NSString *)arg0;
- (void)setProductBuildVersion:(NSString *)arg0;
- (void)setEnclosureColor:(NSString *)arg0;
- (void)setDefaultPairedDevice:(char)arg0;
- (NSString *)uniqueID;

@end
