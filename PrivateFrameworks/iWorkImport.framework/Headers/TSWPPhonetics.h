/* Runtime dump - TSWPPhonetics
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPhonetics : NSObject
{
    NSDictionary * _transcribers;
}

+ (TSWPPhonetics *)sharedDictionary;
+ (TSWPPhonetics *)allocWithZone:(struct _NSZone *)arg0;
+ (TSWPPhonetics *)_singletonAlloc;

- (NSString *)pronunciationForBaseText:(NSString *)arg0 locale:(NSObject *)arg1 inputLanguage:(NSString *)arg2;
- (NSString *)transcriberWithIdentifier:(NSString *)arg0;
- (TSWPPhonetics *)retain;
- (void)release;
- (void)dealloc;
- (TSWPPhonetics *)init;
- (TSWPPhonetics *)autorelease;
- (unsigned int)retainCount;
- (TSWPPhonetics *)copyWithZone:(struct _NSZone *)arg0;

@end
