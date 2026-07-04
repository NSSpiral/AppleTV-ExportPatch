/* Runtime dump - CoreCECPhysicalDevice
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECPhysicalDevice : NSObject
{
    NSMutableArray * _children;
    NSMutableSet * _logicalDevices;
    unsigned int _physicalAddress;
    CoreCECPhysicalDevice * _parent;
}

@property (readonly, nonatomic) unsigned int physicalAddress;
@property (nonatomic) CoreCECPhysicalDevice * parent;
@property (readonly, nonatomic) NSArray * children;
@property (readonly, nonatomic) NSSet * logicalDevices;
@property (readonly, nonatomic) id propertyList;

+ (CoreCECPhysicalDevice *)physicalDeviceTreeWithLogicalDevices:(NSSet *)arg0;

- (NSArray *)propertyList;
- (void)dealloc;
- (CoreCECPhysicalDevice *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (unsigned int)physicalAddress;
- (CoreCECPhysicalDevice *)initWithPhysicalAddress:(unsigned int)arg0;
- (NSSet *)logicalDevices;
- (void)addLogicalDevice:(NSObject *)arg0;
- (CoreCECPhysicalDevice *)initWithLogicalDevice:(NSObject *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (CoreCECPhysicalDevice *)parent;
- (void)setParent:(CoreCECPhysicalDevice *)arg0;
- (NSArray *)children;

@end
