/* Runtime dump - PLLoadRequestKey
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLoadRequestKey : NSObject <NSCopying>
{
    unsigned short _sourceID;
    NSManagedObjectID * _objectID;
    unsigned int _hash;
}

+ (NSObject *)keyWithSource:(NSObject *)arg0 asset:(NSSet *)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (PLLoadRequestKey *)copyWithZone:(struct _NSZone *)arg0;

@end
