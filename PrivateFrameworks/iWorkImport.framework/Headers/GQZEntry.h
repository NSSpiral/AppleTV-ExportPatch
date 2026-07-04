/* Runtime dump - GQZEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntry : NSObject
{
    <GQZArchiveInputStream> * mInput;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
}

- (GQZEntry *)initFromCentralFileHeader:(char *)arg0 inputStream:(id *)arg1;
- (struct _xmlDoc *)recoverXmlDocument;
- (struct _xmlTextReader *)xmlReader:(char)arg0;
- (void)dealloc;
- (NSData *)data;
- (NSInputStream *)inputStream;
- (struct _xmlDoc *)xmlDocument;
- (void)readZip64ExtraField:(char *)arg0 size:(unsigned long)arg1;

@end
