/* Runtime dump - CPLItemChange
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    NSArray * _containerRelations;
}

@property (copy, nonatomic) NSArray * containerRelations;

+ (char)cplShouldIgnorePropertyForCoding:(id)arg0;

- (CPLItemChange *)init;
- (void).cxx_destruct;
- (NSObject *)propertiesForChangeType:(unsigned int)arg0;
- (NSEnumerator *)containerRelationChangesComparedToRelationEnumerator:(NSEnumerator *)arg0 error:(id *)arg1;
- (NSArray *)containerRelations;
- (void)setContainerRelations:(NSArray *)arg0;

@end
