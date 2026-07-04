/* Runtime dump - MLITDBGeniusDatabase
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLITDBGeniusDatabase : NSObject

@property (readonly, nonatomic) ML3MusicLibrary * musicLibrary;

+ (MLITDBGeniusDatabase *)sharedGeniusDatabase;

- (MLITDBGeniusDatabase *)init;
- (ML3MusicLibrary *)musicLibrary;
- (void)performGeniusDatabaseReadWithBlock:(id /* block */)arg0;
- (char)_copyBlobData:(id *)arg0 blobAllocType:(int)arg1 table:(_UIAlertSheetTable *)arg2 blobColumn:(id)arg3 where:(NSString *)arg4;
- (char)_hasAnySongs;
- (char)_hasRowsInTable:(id)arg0;
- (unsigned int)_getInt32ValueInTable:(id)arg0 column:(TSWPColumn *)arg1;
- (id)_copyBlobDataAndBytesInTable:(id)arg0 blobColumn:(id)arg1 where:(NSString *)arg2;
- (char)_readBlobIntoData:(NSData *)arg0 table:(_UIAlertSheetTable *)arg1 blobColumn:(id)arg2 where:(NSString *)arg3;
- (char)_readBlobForRowID:(unsigned long long)arg0 intoData:(NSData *)arg1 table:(char *)arg2 blobColumn:(char *)arg3;
- (unsigned long long)_getInt64ValueInTable:(id)arg0 column:(TSWPColumn *)arg1 where:(NSString *)arg2 limit:(unsigned int)arg3;
- (char)hasGeniusDataAvailable;
- (char)hasGeniusFeatureEnabled;
- (unsigned int)defaultMinTrackCount;
- (unsigned int)defaultTrackCount;
- (NSData *)copyGeniusConfigrationDataAndBytes;
- (unsigned int)geniusConfigurationVersion;
- (NSObject *)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg0;
- (NSObject *)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg0;
- (char)getGeniusConfigrationDataAndBytesIntoData:(NSData *)arg0;
- (char)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg0 intoData:(NSData *)arg1;
- (char)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg0 intoData:(NSData *)arg1;

@end
