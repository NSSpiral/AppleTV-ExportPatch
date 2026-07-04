/* Runtime dump - OITSUSharedLocale
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUSharedLocale : NSObject
{
    struct __CFLocale * mCurrentLocale;
    NSArray * mObserverObjects;
}

+ (OITSUSharedLocale *)allocWithZone:(struct _NSZone *)arg0;
+ (OITSUSharedLocale *)_singletonAlloc;
+ (OITSUSharedLocale *)sharedLocale;

- (OITSUSharedLocale *)retain;
- (void)release;
- (void)dealloc;
- (OITSUSharedLocale *)init;
- (OITSUSharedLocale *)autorelease;
- (unsigned int)retainCount;
- (OITSUSharedLocale *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFLocale *)currentLocale;
- (void)datePreferencesChanged:(NSNotification *)arg0;

@end
