/* Runtime dump - SASetConnectionHeader
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * aceHostHeader;
@property (retain, nonatomic) SAConnectionPolicy * connectionPolicy;
@property (nonatomic) char reconnectNow;

+ (NSString *)setConnectionHeader;
+ (NSDictionary *)setConnectionHeaderWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAConnectionPolicy *)connectionPolicy;
- (NSString *)aceHostHeader;
- (void)setAceHostHeader:(NSString *)arg0;
- (void)setConnectionPolicy:(SAConnectionPolicy *)arg0;
- (char)reconnectNow;
- (void)setReconnectNow:(char)arg0;

@end
