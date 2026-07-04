/* Runtime dump - IMDFileTransferCenter
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate>
{
    NSMutableDictionary * _guidToCopierMap;
    NSMutableDictionary * _guidToSimpleCopierMap;
    NSMutableDictionary * _guidToTransferMap;
    NSMutableSet * _activeTransfers;
    NSString * _contextStamp;
    NSTimer * _transferTimer;
    NSMutableArray * _transferringTransfers;
}

@property (readonly, nonatomic) char hasActiveFileTransfers;
@property (retain, nonatomic) NSString * contextStamp;

+ (IMDFileTransferCenter *)sharedInstance;

- (void)dealloc;
- (IMDFileTransferCenter *)init;
- (void)setContextStamp:(NSString *)arg0;
- (void)_updateContextStamp;
- (void)_postUpdated:(id)arg0;
- (void)_archiveFileTransfer:(id)arg0;
- (NSString *)transferForGUID:(NSString *)arg0;
- (void)failTransfer:(id)arg0 reason:(int)arg1;
- (long)_addGatekeeperProperties:(NSDictionary *)arg0 toFileAtPath:(NSString *)arg1;
- (void)_transferTimerTick:(id)arg0;
- (void)makeNewIncomingTransferWithGUID:(NSString *)arg0 filename:(NSString *)arg1 isDirectory:(char)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned long)arg4 hfsCreator:(unsigned long)arg5 hfsFlags:(unsigned short)arg6;
- (void)makeNewOutgoingTransferWithGUID:(NSString *)arg0 filename:(NSString *)arg1 isDirectory:(char)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned long)arg4 hfsCreator:(unsigned long)arg5 hfsFlags:(unsigned short)arg6;
- (void)removeTransferForGUID:(NSString *)arg0;
- (void)_addActiveTransfer:(id)arg0;
- (id)_createWrapperForTransfer:(id)arg0;
- (void)_addTransferringTransfer:(id)arg0;
- (id)_removeWrapperForTransfer:(id)arg0;
- (void)_removeActiveTransfer:(id)arg0;
- (void)_removeTransferringTransfer:(id)arg0;
- (void)startFinalizingTransfer:(id)arg0;
- (void)_completeProgressForTransferGUID:(NSString *)arg0;
- (void)_clearProgressForTransferGUID:(NSString *)arg0;
- (void)_handleFileTransfer:(id)arg0 acceptedWithPath:(NSString *)arg1 autoRename:(char)arg2 overwrite:(char)arg3 postNotification:(char)arg4;
- (id)_dictionaryRepresentationsForFileTransfers:(id)arg0 toSave:(char)arg1;
- (void)_handleFileTransferStopped:(id)arg0;
- (NSString *)_progressForTransferGUID:(NSString *)arg0 allowCreate:(char)arg1 path:(NSString *)arg2;
- (NSString *)_temporaryPathForGUID:(NSString *)arg0 filename:(NSString *)arg1;
- (void)archiveFileTransfer:(id)arg0;
- (void)_addGatekeeperProperties:(NSDictionary *)arg0 toDirectory:(PLSimpleDCIMDirectory *)arg1;
- (void)addDefaultGatekeeperPropertiesToDirectory:(id)arg0;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)arg0 toDirectory:(PLSimpleDCIMDirectory *)arg1;
- (char)hasActiveFileTransfers;
- (NSString *)guidForNewIncomingTransferWithFilename:(NSString *)arg0 isDirectory:(char)arg1 totalBytes:(unsigned long long)arg2 hfsType:(unsigned long)arg3 hfsCreator:(unsigned long)arg4 hfsFlags:(unsigned short)arg5;
- (NSString *)guidForNewOutgoingTransferWithFilename:(NSString *)arg0 isDirectory:(char)arg1 totalBytes:(unsigned long long)arg2 hfsType:(unsigned long)arg3 hfsCreator:(unsigned long)arg4 hfsFlags:(unsigned short)arg5;
- (void)assignTransfer:(id)arg0 toAccount:(NSObject *)arg1 otherPerson:(NSString *)arg2;
- (void)removeUnassignedTransfers;
- (void)addTransfer:(AWDLQMDataTransfer *)arg0 forGUID:(NSString *)arg1;
- (void)registerStandaloneTransfer:(id)arg0;
- (void)startTransfer:(id)arg0;
- (void)updateTransfer:(id)arg0 currentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)updateTransfer:(id)arg0;
- (void)endTransfer:(id)arg0;
- (void)resetTransferAndPostError:(NSError *)arg0 error:(NSError *)arg1;
- (void)failTransfer:(id)arg0 error:(NSError *)arg1;
- (void)acceptTransfer:(id)arg0 path:(NSString *)arg1;
- (id)_allFileTransfers;
- (void)_handleSendFileTransfer:(id)arg0;
- (void)_handleFileTransfer:(id)arg0 createdWithProperties:(NSDictionary *)arg1 fromPid:(int)arg2;
- (void)_handleFileTransfer:(id)arg0 updatedWithProperties:(NSDictionary *)arg1;
- (void)_handleFileTransferRemoved:(id)arg0;
- (NSString *)contextStamp;
- (void)fileCopierDidStart:(IMFileCopier *)arg0;
- (void)fileCopierDidFinish:(IMFileCopier *)arg0;

@end
