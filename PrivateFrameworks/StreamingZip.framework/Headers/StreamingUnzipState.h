/* Runtime dump - StreamingUnzipState
 * Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface StreamingUnzipState : NSObject
{
    struct z_stream_s _zlibState;
    unsigned long long _lastResumptionSavedOffset;
    unsigned long long _hashedChunkSize;
    unsigned long long _bytesHashedInChunk;
    unsigned long long _uncompressedBytesOutput;
    NSString * _unzipPath;
    NSArray * _hashes;
    unsigned long _currentLFRecordAllocationSize;
    struct ? _hashContext;
    NSDictionary * _streamInfoDict;
    NSString * _lastChunkPartialHash;
    NSMutableData * _unsureData;
    NSMutableData * _inMemoryFileData;
    NSMutableData * _unfinishedCompressedData;
    struct ? * _currentLFRecord;
    struct ? * _dataDescriptor;
    unsigned long long _thisStageBytesComplete;
    unsigned long long _currentOffset;
    unsigned long long _outputFileOffsetAtLastBlockEnd;
    unsigned long long _recordsProcessed;
    unsigned long long _totalRecordCount;
    unsigned long _currentCRC32;
    int _currentOutputFD;
    unsigned short _currentLFMode;
    unsigned char _streamState;
    unsigned char _lastBlockEndNumUnusedBits;
    unsigned char _lastBlockEndLastByte;
    char _storeCurrentFileInMemory;
    char _currentLFRequiresDataDescriptor;
}

@property (readonly, nonatomic) struct z_stream_s * zlibState;
@property (readonly, nonatomic) NSString * unzipPath;
@property (readonly, nonatomic) struct ? hashContext;
@property (retain, nonatomic) NSDictionary * streamInfoDict;
@property (retain, nonatomic) NSString * lastChunkPartialHash;
@property (retain, nonatomic) NSMutableData * unsureData;
@property (retain, nonatomic) NSMutableData * inMemoryFileData;
@property (retain, nonatomic) NSMutableData * unfinishedCompressedData;
@property (nonatomic) struct ? * currentLFRecord;
@property (nonatomic) unsigned long currentLFRecordAllocationSize;
@property (nonatomic) unsigned long long thisStageBytesComplete;
@property (nonatomic) unsigned long long currentOffset;
@property (readonly, nonatomic) unsigned long long hashedChunkSize;
@property (readonly, nonatomic) unsigned long long bytesHashedInChunk;
@property (nonatomic) unsigned long currentCRC32;
@property (nonatomic) int currentOutputFD;
@property (nonatomic) unsigned long long recordsProcessed;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long uncompressedBytesOutput;
@property (nonatomic) unsigned short currentLFMode;
@property (nonatomic) unsigned char streamState;
@property (nonatomic) char storeCurrentFileInMemory;
@property (nonatomic) char currentLFRequiresDataDescriptor;
@property (nonatomic) struct ? * dataDescriptor;

+ (NSString *)unzipStateWithPath:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;

- (StreamingUnzipState *)initWithPath:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (void)dealloc;
- (StreamingUnzipState *)init;
- (void).cxx_destruct;
- (void)setStreamState:(unsigned char)arg0;
- (NSString *)unzipPath;
- (void)setCurrentOutputFD:(int)arg0;
- (int)currentOutputFD;
- (NSMutableData *)unsureData;
- (void)setCurrentOffset:(unsigned long long)arg0;
- (NSSet *)updateHashFromOffset:(unsigned long long)arg0 withBytes:(void *)arg1 length:(void)arg2;
- (NSObject *)serializeState;
- (unsigned char)streamState;
- (struct ? *)currentLFRecord;
- (unsigned long long)thisStageBytesComplete;
- (unsigned long long)hashedChunkSize;
- (unsigned long long)bytesHashedInChunk;
- (NSString *)lastChunkPartialHash;
- (id)checkLastChunkPartialHash;
- (NSSet *)updateHashFromOffset:(unsigned long long)arg0 withBytes:(void *)arg1 length:(void)arg2 onlyFinishCurrentChunk:(unsigned long)arg3;
- (void)markResumptionPoint;
- (void)setCurrentLFRequiresDataDescriptor:(char)arg0;
- (char)currentLFRequiresDataDescriptor;
- (unsigned long)currentLFRecordAllocationSize;
- (void)setCurrentLFRecord:(struct ? *)arg0;
- (void)setCurrentLFRecordAllocationSize:(unsigned long)arg0;
- (unsigned long long)recordsProcessed;
- (void)setStoreCurrentFileInMemory:(char)arg0;
- (NSDictionary *)streamInfoDict;
- (void)setCurrentLFMode:(unsigned short)arg0;
- (unsigned short)currentLFMode;
- (char)storeCurrentFileInMemory;
- (void)setCurrentCRC32:(unsigned long)arg0;
- (unsigned long)currentCRC32;
- (NSMutableData *)inMemoryFileData;
- (void)setThisStageBytesComplete:(unsigned long long)arg0;
- (unsigned long long)uncompressedBytesOutput;
- (void)setUncompressedBytesOutput:(unsigned long long)arg0;
- (struct z_stream_s *)zlibState;
- (NSMutableData *)unfinishedCompressedData;
- (void)markResumptionPointWithLastCompressedByte:(unsigned char)arg0;
- (struct ? *)dataDescriptor;
- (void)setDataDescriptor:(struct ? *)arg0;
- (void)setStreamInfoDict:(NSDictionary *)arg0;
- (void)setUnsureData:(NSMutableData *)arg0;
- (void)setTotalRecordCount:(unsigned long long)arg0;
- (struct ?)hashContext;
- (void)setLastChunkPartialHash:(NSString *)arg0;
- (NSObject *)finishStream;
- (NSSet *)_checkHashForOffset:(unsigned long long)arg0;
- (void)clearSavedState;
- (void)_internalSetStreamState:(unsigned char)arg0;
- (void)setInMemoryFileData:(NSMutableData *)arg0;
- (void)setUnfinishedCompressedData:(NSMutableData *)arg0;
- (void)setRecordsProcessed:(unsigned long long)arg0;
- (unsigned long long)totalRecordCount;
- (unsigned long long)currentOffset;

@end
