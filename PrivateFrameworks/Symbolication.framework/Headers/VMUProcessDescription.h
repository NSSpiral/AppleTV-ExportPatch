/* Runtime dump - VMUProcessDescription
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcessDescription : NSObject <VMULibraryLoadDelegate>
{
    unsigned int _task;
    int _pid;
    NSString * _processName;
    char _processNameNeedsCorrection;
    NSString * _executablePath;
    _VMULibraryLoadObserver * _loadUnloadObserver;
    char _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    char _is64Bit;
    NSDictionary * _lsApplicationInformation;
    NSMutableArray * _binaryImages;
    NSArray * _sortedBinaryImages;
    NSDictionary * _binaryImageHints;
    NSArray * _unreadableBinaryImagePaths;
    char _binaryImagePostProcessingComplete;
    NSDictionary * _buildVersionDictionary;
    NSDictionary * _osVersionDictionary;
    struct mapped_memory_t * _mappedMemory;
    NSString * _parentProcessName;
    NSString * _parentExecutablePath;
    int _ppid;
    NSDate * _date;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)parseBinaryImagesDescription:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (NSDate *)date;
- (NSString *)executablePath;
- (NSString *)processName;
- (NSString *)displayName;
- (int)processIdentifier;
- (unsigned int)task;
- (int)pid;
- (int)cpuType;
- (VMUProcessDescription *)initWithPid:(int)arg0 orTask:(unsigned int)arg1 getBinariesList:(char)arg2;
- (NSString *)binaryImagesDescription;
- (void)_libraryLoaded:(struct _CSTypeRef)arg0;
- (NSMutableArray *)binaryImages;
- (NSDictionary *)processVersionDictionary;
- (NSString *)_sanitizeVersion:(NSString *)arg0;
- (void)setCrashReporterInfo;
- (id)_bundleLock;
- (void)clearCrashReporterInfo;
- (id)_rangesOfBinaryImages:(id)arg0 forBacktraces:(id)arg1;
- (NSArray *)_binaryImagesDescriptionForRanges:(NSArray *)arg0;
- (NSDictionary *)_buildVersionDictionary;
- (NSDictionary *)_osVersionDictionary;
- (NSString *)_buildInfoDescription;
- (NSString *)processVersion;
- (NSString *)_cpuTypeDescription;
- (NSString *)parentProcessName;
- (NSString *)_systemVersionDescription;
- (NSString *)processDescriptionHeader;
- (NSString *)dateAndVersionDescription;
- (VMUProcessDescription *)initWithPid:(int)arg0 orTask:(unsigned int)arg1;
- (char)isAppleApplication;
- (NSString *)binaryImageDictionaryForAddress:(unsigned long long)arg0;
- (id)binaryImagesDescriptionForBacktraces:(id)arg0;

@end
