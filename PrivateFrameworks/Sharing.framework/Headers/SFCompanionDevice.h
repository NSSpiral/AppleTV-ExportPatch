/* Runtime dump - SFCompanionDevice
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionDevice : NSObject
{
    id _node;
    NSString * _name;
    NSString * _type;
    NSString * _identifier;
    NSArray * _services;
    NSString * _serviceName;
    NSMutableSet * _connections;
    NSDictionary * _activities;
    NSString * _uniqueIdentifier;
}

@property (retain, nonatomic) id node;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * type;
@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSArray * services;
@property (retain, nonatomic) NSString * serviceName;
@property (retain, nonatomic) NSMutableSet * connections;
@property (retain, nonatomic) NSDictionary * activities;
@property (retain) NSString * uniqueIdentifier;

- (struct CGImage *)icon;
- (NSMutableSet *)connections;
- (void)dealloc;
- (SFCompanionDevice *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setIdentifier:(NSString *)arg0;
- (ABModel *)model;
- (NSString *)uniqueIdentifier;
- (SCNNode *)node;
- (NSDictionary *)activities;
- (void)setActivities:(NSDictionary *)arg0;
- (void)setUniqueIdentifier:(NSString *)arg0;
- (void)setNode:(NSObject *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSArray *)services;
- (void)setServices:(NSArray *)arg0;
- (NSString *)serviceName;
- (int)distance;
- (void)setConnections:(NSMutableSet *)arg0;

@end
