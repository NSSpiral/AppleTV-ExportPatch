/* Runtime dump - CPLFileStorageItem
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFileStorageItem : NSObject <NSCopying>
{
    char _original;
    char _markedForDelete;
    CPLResourceIdentity * _identity;
    NSDate * _lastAccessDate;
}

@property (readonly, nonatomic) CPLResourceIdentity * identity;
@property (readonly, nonatomic) char original;
@property (readonly, nonatomic) char markedForDelete;
@property (readonly, nonatomic) NSDate * lastAccessDate;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CPLFileStorageItem *)copyWithZone:(struct _NSZone *)arg0;
- (char)getResourceValue:(id *)arg0 forKey:(NSString *)arg1 error:(NSError *)arg2;
- (void).cxx_destruct;
- (char)isOriginal;
- (char)isMarkedForDelete;
- (NSDate *)lastAccessDate;
- (CPLFileStorageItem *)initWithIdentity:(CPLResourceIdentity *)arg0 original:(char)arg1 markedForDelete:(char)arg2 lastAccessDate:(NSDate *)arg3;
- (CPLResourceIdentity *)identity;

@end
