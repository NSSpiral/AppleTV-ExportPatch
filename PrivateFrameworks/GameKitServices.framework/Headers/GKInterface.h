/* Runtime dump - GKInterface
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKInterface : NSObject
{
    NSNumber * _index;
    NSString * _bsdName;
    NSString * _type;
    unsigned int _priority;
}

@property (retain, nonatomic) NSNumber * index;
@property (copy, nonatomic) NSString * bsdName;
@property (copy, nonatomic) NSString * type;
@property (nonatomic) unsigned int priority;

+ (NSObject *)bsdNameForIndex:(NSObject *)arg0;
+ (GKInterface *)interfaceWithInterfaceIndex:(unsigned long long)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSNumber *)index;
- (void)setPriority:(unsigned int)arg0;
- (unsigned int)priority;
- (void)setIndex:(NSNumber *)arg0;
- (NSString *)bsdName;
- (void)setBsdName:(NSString *)arg0;

@end
