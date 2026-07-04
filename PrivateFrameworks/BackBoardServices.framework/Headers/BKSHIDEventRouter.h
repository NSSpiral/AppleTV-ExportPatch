/* Runtime dump - BKSHIDEventRouter
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouter : NSObject <NSSecureCoding>
{
    int _destination;
    NSSet * _hidEventDescriptors;
}

@property (readonly) int destination;
@property (readonly) NSSet * hidEventDescriptors;

+ (char)supportsSecureCoding;
+ (BKSHIDEventRouter *)defaultSystemAppEventRouter;
+ (BKSHIDEventRouter *)defaultFocusedAppEventRouter;
+ (NSObject *)routerWithDestination:(int)arg0;
+ (BKSHIDEventRouter *)defaultEventRouters;

- (void)dealloc;
- (BKSHIDEventRouter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)destination;
- (BKSHIDEventRouter *)initWithDestination:(int)arg0;
- (BKSHIDEventRouter *)initWithDestination:(int)arg0 hidEventDescriptors:(NSSet *)arg1;
- (NSSet *)hidEventDescriptors;
- (NSObject *)stringForDestination:(int)arg0;
- (void)addHIDEventDescriptors:(NSArray *)arg0;
- (void)removeHIDEventDescriptors:(NSArray *)arg0;
- (char)specifiesDescriptor:(NSObject *)arg0;
- (char)containsDescriptor:(NSObject *)arg0;
- (id)dumpContents;

@end
