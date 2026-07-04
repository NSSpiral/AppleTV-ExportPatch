/* Runtime dump - TSUWeakReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUWeakReference : NSObject
{
    id mObject;
}

@property (readonly, nonatomic) id object;

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (TSUWeakReference *)init;
- (NSObject *)object;
- (TSUWeakReference *)initWithObject:(NSObject *)arg0;

@end
