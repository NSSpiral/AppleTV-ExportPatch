/* Runtime dump - PDBuildMapKey
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDBuildMapKey : NSObject <NSCopying>
{
    NSValue * mDrawableValue;
    NSString * mGroupId;
}

- (void)dealloc;
- (PDBuildMapKey *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (PDBuildMapKey *)copyWithZone:(struct _NSZone *)arg0;
- (TSDDrawableInfo *)drawable;
- (void)setDrawable:(TSDDrawableInfo *)arg0;
- (PDBuildMapKey *)initWithDrawable:(TSDDrawableInfo *)arg0 groupId:(NSString *)arg1;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;

@end
