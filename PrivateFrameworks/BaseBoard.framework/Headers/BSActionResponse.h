/* Runtime dump - BSActionResponse
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider>
{
    BSSettings * _info;
    NSError * _error;
}

@property (readonly, copy, nonatomic) BSSettings * info;
@property (readonly, retain, nonatomic) NSError * error;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLResponse *)response;
+ (NSError *)responseForError:(NSError *)arg0;
+ (NSDictionary *)responseWithInfo:(BSSettings *)arg0;

- (void)dealloc;
- (BSActionResponse *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BSActionResponse *)copyWithZone:(struct _NSZone *)arg0;
- (BSSettings *)info;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (BSActionResponse *)initWithXPCDictionary:(NSDictionary *)arg0;
- (BSActionResponse *)initWithInfo:(BSSettings *)arg0 error:(NSError *)arg1;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg0;
- (NSError *)error;

@end
