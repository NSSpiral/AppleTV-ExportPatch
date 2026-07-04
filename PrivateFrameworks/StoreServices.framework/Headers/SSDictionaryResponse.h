/* Runtime dump - SSDictionaryResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDictionaryResponse : NSObject <NSCopying>
{
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) NSDictionary * responseDictionary;
@property (readonly, nonatomic) NSArray * actions;
@property (readonly, nonatomic) NSNumber * failureType;
@property (readonly, nonatomic) NSArray * pingURLs;
@property (readonly, nonatomic) char supportedProtocolVersion;
@property (readonly, nonatomic) NSURL * versionMismatchURL;

- (SSDictionaryResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (void)dealloc;
- (SSDictionaryResponse *)init;
- (NSArray *)actions;
- (SSDictionaryResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)responseDictionary;
- (NSArray *)pingURLs;
- (NSString *)_valueForProtocolKey:(NSString *)arg0;
- (NSNumber *)_copyAccount;
- (NSObject *)actionsWithActionType:(NSObject *)arg0;
- (NSNumber *)failureType;
- (char)isSupportedProtocolVersion;
- (NSURL *)versionMismatchURL;

@end
