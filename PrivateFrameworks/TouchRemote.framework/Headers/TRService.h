/* Runtime dump - TRService
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRService : NSObject <NSSecureCoding>
{
    TRAdvertisingInfo * _advertisingInfo;
    NSString * _name;
    int _uniqueID;
}

@property (readonly, nonatomic) TRAdvertisingInfo * advertisingInfo;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int uniqueID;

+ (char)supportsSecureCoding;

- (TRService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)name;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)arg0;
- (NSString *)_initWithName:(NSString *)arg0 uniqueID:(int)arg1 advertisingInfo:(TRAdvertisingInfo *)arg2;
- (TRAdvertisingInfo *)advertisingInfo;
- (int)uniqueID;

@end
