/* Runtime dump - TSPDistributableArchiveOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchiveOutputStream : NSObject
{
    <SFUSimpleOutputStream> * _outputStream;
    long long _offset;
    char _doneWritingObjectEntries;
    char _doneWritingFileDescriptorProtos;
    char _doneWritingClassInfoMap;
    char _descriptorsEnabled;
    char _tocEnabled;
}

- (TSPDistributableArchiveOutputStream *)initWithOutputStream:(<SFUSimpleOutputStream> *)arg0 checkCrc:(unsigned int)arg1 enableDescriptors:(char)arg2 enableToc:(char)arg3 closedCleanly:(char)arg4 archivedVersions:(struct ?)arg5;
- (char)writeEntry:(GEODBWriteEntry *)arg0 offset:(long long *)arg1 headerLength:(unsigned int *)arg2 error:(id *)arg3;
- (void).cxx_destruct;

@end
