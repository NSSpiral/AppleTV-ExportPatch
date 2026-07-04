/* Runtime dump - GKSavedGameDocument
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGameDocument : NSObject <NSFilePresenter>
{
    char _hasConflict;
    char _isConflictVersion;
    NSURL * _fileURL;
    NSString * _name;
    NSFileVersion * _fileVersion;
    NSString * _deviceName;
    NSDate * _modificationDate;
}

@property (retain, nonatomic) NSURL * fileURL;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSFileVersion * fileVersion;
@property (nonatomic) char hasConflict;
@property (nonatomic) char isConflictVersion;
@property (retain, nonatomic) NSString * deviceName;
@property (retain, nonatomic) NSDate * modificationDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly, retain) NSOperationQueue * presentedItemOperationQueue;
@property (readonly, copy) NSURL * primaryPresentedItemURL;

+ (GKSavedGameDocument *)currentDeviceName;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSDate *)modificationDate;
- (NSURL *)fileURL;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(NSFileVersion *)arg0;
- (void)presentedItemDidLoseVersion:(NSFileVersion *)arg0;
- (void)presentedItemDidResolveConflictVersion:(NSFileVersion *)arg0;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;
- (GKSavedGameDocument *)initWithFileURL:(NSURL *)arg0;
- (NSString *)deviceName;
- (char)isConflictVersion;
- (void)loadDataWithCompletionHandler:(id /* block */)arg0;
- (void)saveData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (void)deleteAllVersionsIncludingCurrent:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)loadMetadataWithCompletionHandler:(id /* block */)arg0;
- (char)hasConflict;
- (void)setIsConflictVersion:(char)arg0;
- (void)setHasConflict:(char)arg0;
- (void)setFileVersion:(NSFileVersion *)arg0;
- (void)updateConflictStateWithCompletionHandler:(id /* block */)arg0;
- (void)deleteConflictVersion:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)loadWrapperDataWithFilename:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (NSFileVersion *)fileVersion;
- (void)updateMetadata;
- (void)setModificationDate:(NSDate *)arg0;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)setFileURL:(NSURL *)arg0;
- (void)setDeviceName:(NSString *)arg0;

@end
