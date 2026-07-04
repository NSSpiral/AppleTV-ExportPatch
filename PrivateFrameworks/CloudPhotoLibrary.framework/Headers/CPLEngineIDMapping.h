/* Runtime dump - CPLEngineIDMapping
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)resetWithError:(id *)arg0;
- (char)resetAllFinalCloudIdentifiersWithError:(id *)arg0;
- (NSString *)localIdentifierForCloudIdentifier:(NSString *)arg0 isFinal:(char *)arg1;
- (char)markAllPendingIdentifiersAsFinalWithError:(id *)arg0;
- (NSString *)cloudIdentifierForLocalIdentifier:(NSMutableDictionary *)arg0 isFinal:(char *)arg1;
- (NSString *)cloudIdentifiersForLocalIdentifiers:(id)arg0;
- (NSString *)localIdentifiersForCloudIdentifiers:(id)arg0;
- (char)addCloudIdentifier:(NSString *)arg0 forLocalIdentifier:(NSString *)arg1 isFinal:(char)arg2 error:(id *)arg3;
- (char)setFinalCloudIdentifier:(NSString *)arg0 forPendingCloudIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)hasPendingIdentifiers;
- (char)removeMappingForCloudIdentifier:(NSString *)arg0 error:(id *)arg1;

@end
