/* Runtime dump - CPLContainerRelationChange
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLContainerRelationChange : CPLRecordChange
{
    NSString * _itemIdentifier;
    CPLContainerRelation * _relation;
}

@property (copy, nonatomic) NSString * itemIdentifier;
@property (retain, nonatomic) CPLContainerRelation * relation;

+ (NSString *)relationToContainerWithIdentifier:(NSString *)arg0;
+ (NSString *)relationWithItemIdentifier:(NSString *)arg0 containerIdentifier:(NSString *)arg1;

- (void)setItemIdentifier:(NSString *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (CPLContainerRelation *)relation;
- (NSString *)identifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (NSString *)relatedIdentifier;
- (void)setRelatedIdentifier:(NSString *)arg0;
- (void)setRelation:(CPLContainerRelation *)arg0;
- (NSString *)secondaryIdentifier;
- (void)setSecondaryIdentifier:(NSString *)arg0;
- (id)compactedChangeWithRelatedChanges:(id)arg0 isOnlyChange:(char)arg1 usingClientCache:(NSObject *)arg2;
- (NSString *)itemIdentifier;

@end
