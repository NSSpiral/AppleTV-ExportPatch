/* Runtime dump - BKSEventFocusDeferralProperties
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>
{
    NSString * _clientID;
    int _pid;
    NSString * _displayUUID;
    unsigned int _contextID;
}

@property (readonly, nonatomic) NSString * clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString * displayUUID;
@property (readonly, nonatomic) unsigned int contextID;

+ (char)supportsSecureCoding;
+ (NSObject *)propertiesWithClientID:(NSString *)arg0 pid:(int)arg1 displayUUID:(NSString *)arg2 contextID:(unsigned int)arg3;
+ (NSObject *)propertiesWithMainDisplayAndClientID:(NSObject *)arg0 pid:(int)arg1 contextID:(unsigned int)arg2;
+ (NSObject *)propertiesWithMainDisplayAndClientID:(NSObject *)arg0 contextID:(unsigned int)arg1;
+ (NSObject *)propertiesWithClientID:(NSString *)arg0 displayUUID:(NSString *)arg1 contextID:(unsigned int)arg2;

- (void)dealloc;
- (BKSEventFocusDeferralProperties *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)contextID;
- (BKSEventFocusDeferralProperties *)initWithClientID:(NSString *)arg0 pid:(int)arg1 displayUUID:(NSString *)arg2 contextID:(unsigned int)arg3;
- (NSString *)displayUUID;
- (char)isEqualNotIncludingClientIDAndPid:(id)arg0;
- (id)propertiesOneLevelMoreGeneric;
- (int)pid;
- (void)setPid:(int)arg0;
- (NSString *)clientID;

@end
