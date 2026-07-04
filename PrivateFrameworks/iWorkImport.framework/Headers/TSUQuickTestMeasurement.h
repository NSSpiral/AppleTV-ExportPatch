/* Runtime dump - TSUQuickTestMeasurement
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUQuickTestMeasurement : NSObject
{
    TSMTraceBuffer * mBuffer;
    NSDictionary * mPrevious;
}

+ (TSUQuickTestMeasurement *)allocWithZone:(struct _NSZone *)arg0;
+ (TSUQuickTestMeasurement *)_singletonAlloc;
+ (TSUQuickTestMeasurement *)sharedManager;

- (NSString *)p_niceString:(unsigned long long)arg0 withPrefix:(NSString *)arg1;
- (NSString *)getPreviousTimeForKey:(NSString *)arg0;
- (id)displayTime:(unsigned long long)arg0 forClassAndMethodName:(NSString *)arg1;
- (TSUQuickTestMeasurement *)retain;
- (void)release;
- (void)dealloc;
- (TSUQuickTestMeasurement *)autorelease;
- (unsigned int)retainCount;
- (TSUQuickTestMeasurement *)copyWithZone:(struct _NSZone *)arg0;
- (void)setup;
- (void)teardown;

@end
