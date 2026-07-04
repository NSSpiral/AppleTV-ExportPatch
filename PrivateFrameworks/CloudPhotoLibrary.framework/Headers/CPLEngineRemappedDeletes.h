/* Runtime dump - CPLEngineRemappedDeletes
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)resetWithError:(id *)arg0;
- (void)scheduleDeleteForRemappedRecordWithIdentifier:(NSString *)arg0 realIdentifier:(NSString *)arg1 asap:(char)arg2;
- (void)discardDeleteForRemappedRecordWithIdentifier:(NSString *)arg0;

@end
