/* Runtime dump - PFZipEndOfCentralDirectoryRecord
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFZipEndOfCentralDirectoryRecord : NSObject
{
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString * _comment;
}

@property (nonatomic) unsigned short numberOfDisk;
@property (nonatomic) unsigned short diskWhereCentralDirectoryStarts;
@property (nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;
@property (nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;
@property (nonatomic) unsigned int byteSizeOfCentralDirectory;
@property (nonatomic) unsigned int centralDirectoryOffset;
@property (readonly, nonatomic) unsigned short commentLength;
@property (retain, nonatomic) NSString * comment;

- (unsigned int)loadFromBytes:(char *)arg0 offset:(unsigned int)arg1;
- (unsigned int)loadFromData:(NSData *)arg0 offset:(unsigned int)arg1;
- (void)appendToData:(NSData *)arg0;
- (unsigned short)numberOfDisk;
- (void)setNumberOfDisk:(unsigned short)arg0;
- (unsigned short)diskWhereCentralDirectoryStarts;
- (void)setDiskWhereCentralDirectoryStarts:(unsigned short)arg0;
- (unsigned short)numberOfCentralDirectoryRecordsOnThisDisk;
- (void)setNumberOfCentralDirectoryRecordsOnThisDisk:(unsigned short)arg0;
- (unsigned short)totalNumberOfCentralDirectoryRecords;
- (void)setTotalNumberOfCentralDirectoryRecords:(unsigned short)arg0;
- (unsigned int)byteSizeOfCentralDirectory;
- (void)setByteSizeOfCentralDirectory:(unsigned int)arg0;
- (unsigned int)centralDirectoryOffset;
- (void)setCentralDirectoryOffset:(unsigned int)arg0;
- (unsigned short)commentLength;
- (void)dealloc;
- (PFZipEndOfCentralDirectoryRecord *)init;
- (NSString *)description;
- (void)setComment:(NSString *)arg0;
- (NSString *)comment;

@end
