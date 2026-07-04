/* Runtime dump - TSUZipWriterEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipWriterEntry : NSObject
{
    NSString * _name;
    unsigned int _CRC;
    unsigned long long _size;
    unsigned long long _offset;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;

- (void)setCRC:(unsigned int)arg0;
- (unsigned int)CRC;
- (unsigned long long)size;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setSize:(unsigned long long)arg0;
- (void)setOffset:(unsigned long long)arg0;
- (unsigned long long)offset;
- (void).cxx_destruct;

@end
