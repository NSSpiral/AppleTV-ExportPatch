/* Runtime dump - SFUDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUDataRepresentation : NSObject
{
    char mHasHash;
    unsigned int mHash;
    char mHasSha1Hash;
    NSData * mSha1Hash;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)compare:(NSObject *)arg0;
- (char)isEncrypted;
- (NSInputStream *)inputStream;
- (struct _xmlTextReader *)xmlReaderWithReadCallback:(/* block */ id *)arg0;
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg0;
- (unsigned int)uint32Hash;
- (NSObject *)bufferedInputStreamWithBufferSize:(unsigned long)arg0;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlTextReader *)xmlReaderForGzippedData;
- (struct CGDataProvider *)cgDataProvider;
- (unsigned long)readIntoData:(NSData *)arg0;
- (id)sha1Hash;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (NSInputStream *)bufferedInputStream;
- (long long)encodedLength;
- (long long)dataLength;

@end
