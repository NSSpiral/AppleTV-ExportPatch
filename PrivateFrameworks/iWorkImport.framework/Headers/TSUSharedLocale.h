/* Runtime dump - TSUSharedLocale
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUSharedLocale : NSObject
{
    struct __CFLocale * mCurrentLocale;
    NSArray * mObserverObjects;
}

+ (TSUSharedLocale *)allocWithZone:(struct _NSZone *)arg0;
+ (TSUSharedLocale *)_singletonAlloc;
+ (TSUSharedLocale *)sharedLocale;

- (TSUSharedLocale *)retain;
- (void)release;
- (void)dealloc;
- (TSUSharedLocale *)init;
- (TSUSharedLocale *)autorelease;
- (unsigned int)retainCount;
- (TSUSharedLocale *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFLocale *)currentLocale;
- (void)datePreferencesChanged:(NSNotification *)arg0;

@end
