/* Runtime dump - PLSyncSaveJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSyncSaveJob : NSObject
{
    char isVideo;
    char isSyncComplete;
    char _cleanupSyncState;
    NSArray * facesInfo;
    NSURL * originalAssetURL;
    NSString * uuid;
    NSDate * creationDate;
    NSDate * modificationDate;
    NSSet * albumURIs;
    CLLocation * location;
    NSNumber * sortToken;
    NSString * originalFileName;
    NSDate * _cleanupBeforeDate;
    id _finishedBlock;
}

@property (retain, nonatomic) NSURL * originalAssetURL;
@property (nonatomic) char isVideo;
@property (copy, nonatomic) NSString * uuid;
@property (copy, nonatomic) NSDate * creationDate;
@property (copy, nonatomic) NSDate * modificationDate;
@property (copy, nonatomic) NSSet * albumURIs;
@property (copy, nonatomic) CLLocation * location;
@property (retain, nonatomic) NSArray * facesInfo;
@property (retain, nonatomic) NSNumber * sortToken;
@property (retain, nonatomic) NSString * originalFileName;
@property (nonatomic) char isSyncComplete;
@property (nonatomic) char cleanupSyncState;
@property (copy, nonatomic) NSDate * cleanupBeforeDate;
@property (copy, nonatomic) id finishedBlock;

- (void)dealloc;
- (NSString *)description;
- (NSDate *)modificationDate;
- (CLLocation *)location;
- (NSString *)uuid;
- (char)isVideo;
- (NSDate *)creationDate;
- (void)setLocation:(CLLocation *)arg0;
- (void)setModificationDate:(NSDate *)arg0;
- (void)setUuid:(NSString *)arg0;
- (void)setSortToken:(NSNumber *)arg0;
- (char)cleanupSyncState;
- (NSDate *)cleanupBeforeDate;
- (char)isSyncComplete;
- (NSURL *)originalAssetURL;
- (NSNumber *)sortToken;
- (NSString *)originalFileName;
- (void)processFacesWithBlock:(id /* block */)arg0;
- (NSArray *)facesInfo;
- (NSSet *)albumURIs;
- (PLSyncSaveJob *)initFromSerializedData:(NSData *)arg0;
- (NSData *)serializedData;
- (void)setOriginalAssetURL:(NSURL *)arg0;
- (void)setCreationDate:(NSDate *)arg0;
- (void)setAlbumURIs:(NSSet *)arg0;
- (void)setFacesInfo:(NSArray *)arg0;
- (void)setOriginalFileName:(NSString *)arg0;
- (void)setIsVideo:(char)arg0;
- (void)setIsSyncComplete:(char)arg0;
- (void)setCleanupSyncState:(char)arg0;
- (void)setCleanupBeforeDate:(NSDate *)arg0;
- (id /* block */)finishedBlock;
- (void)setFinishedBlock:(id /* block */)arg0;

@end
