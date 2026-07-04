/* Runtime dump - BRCDownloadContentEntry
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadContentEntry : BRCDownloadEntry
{
    unsigned long long _liveFileID;
    unsigned int _liveDocumentID;
    char _liveItemIsPackage;
    char _sharedZone;
    char _requiresSecondPhase;
    NSIndexSet * _desiredIndices;
}

@property (readonly, nonatomic) char requiresSecondPhase;
@property (readonly, nonatomic) char liveItemIsPackage;
@property (readonly, nonatomic) unsigned int liveDocumentID;
@property (readonly, nonatomic) unsigned long long liveFileID;
@property (readonly, nonatomic) NSIndexSet * desiredIndices;

- (NSString *)description;
- (void).cxx_destruct;
- (int)kind;
- (char)requiresSecondPhase;
- (BRCDownloadContentEntry *)initWithDocument:(NSObject *)arg0 stageID:(NSString *)arg1;
- (char)_prepareSecondStageWithSession:(NSObject *)arg0 manifest:(GEOSearchAttributionManifest *)arg1 package:(TSPDirectoryPackage *)arg2 error:(id *)arg3;
- (char)_stageEntryWithSession:(NSObject *)arg0 manifest:(GEOSearchAttributionManifest *)arg1 package:(TSPDirectoryPackage *)arg2 error:(id *)arg3;
- (char)_stageEntryWithSession:(NSObject *)arg0 error:(id *)arg1;
- (char)liveItemIsPackage;
- (unsigned int)liveDocumentID;
- (NSIndexSet *)desiredIndices;
- (unsigned long long)liveFileID;

@end
