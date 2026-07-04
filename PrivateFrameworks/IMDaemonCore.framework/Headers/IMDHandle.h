/* Runtime dump - IMDHandle
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDHandle : NSObject
{
    NSString * _id;
    NSString * _unformattedID;
    NSString * _countryCode;
}

@property (retain, nonatomic) NSString * ID;
@property (retain, nonatomic) NSString * unformattedID;
@property (retain, nonatomic) NSString * countryCode;
@property (readonly, retain, nonatomic) NSDictionary * handleInfo;

- (NSString *)ID;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setID:(NSSet *)arg0;
- (NSDictionary *)handleInfo;
- (int)compareIDs:(id)arg0;
- (char)isBetterDefinedThan:(id)arg0;
- (IMDHandle *)initWithID:(int)arg0 unformattedID:(NSString *)arg1 countryCode:(NSString *)arg2;
- (NSString *)unformattedID;
- (void)setUnformattedID:(NSString *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;

@end
