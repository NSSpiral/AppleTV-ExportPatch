/* Runtime dump - OITSUWeakReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUWeakReference : NSObject
{
    id mObject;
}

@property (readonly, nonatomic) id object;

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (OITSUWeakReference *)init;
- (NSObject *)object;
- (OITSUWeakReference *)initWithObject:(NSObject *)arg0;

@end
