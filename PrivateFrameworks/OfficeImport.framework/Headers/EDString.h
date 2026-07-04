/* Runtime dump - EDString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDString : NSObject <NSCopying, EDImmutableObject>
{
    NSString * mString;
    EDRunsCollection * mRuns;
    EDPhoneticInfo * mPhoneticInfo;
    BOOL mDoNotModify;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)string;
+ (NSString *)edStringWithString:(NSString *)arg0;
+ (NSString *)edStringWithString:(NSString *)arg0 runs:(id)arg1;

- (char)isEqualToString:(NSString *)arg0;
- (void)dealloc;
- (EDString *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)appendString:(NSString *)arg0;
- (EDString *)copyWithZone:(struct _NSZone *)arg0;
- (BOOL)isEmpty;
- (NSString *)string;
- (EDString *)initWithString:(NSString *)arg0;
- (void)setString:(NSString *)arg0;
- (id)runs;
- (void)setRuns:(id)arg0;
- (BOOL)areThereRuns;
- (UIFont *)firstRunFont;
- (NSDictionary *)phoneticInfo;
- (EDString *)initWithString:(NSString *)arg0 runs:(id)arg1;
- (char)isEqualToEDString:(NSString *)arg0;
- (void)setPhoneticInfo:(NSDictionary *)arg0;
- (void)prependString:(NSString *)arg0;
- (void)setDoNotModify:(BOOL)arg0;

@end
