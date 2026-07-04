/* Runtime dump - PLWeakRef
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWeakRef : NSObject
{
    id _object;
}

@property (readonly, weak, nonatomic) id object;

+ (NSObject *)weakRefWithObject:(NSObject *)arg0;

- (void)dealloc;
- (NSObject *)object;
- (PLWeakRef *)initWithObject:(NSObject *)arg0;

@end
