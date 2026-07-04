/* Runtime dump - TSPDistributableArchiveEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation>
{
    long long _identifier;
    NSString * _fileStateIdentifier;
    SFUDataRepresentation * _objectData;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > * _ownedIds;
    int _classType;
    unsigned int _version;
    NSString * _relativeDataPath;
}

@property (nonatomic) int classType;
@property (nonatomic) unsigned int version;
@property (copy, nonatomic) NSString * relativeDataPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setFileStateIdentifier:(NSString *)arg0;
- (NSString *)fileStateIdentifier;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)ownedIds;
- (char)setDataRepresentation:(NSData *)arg0 shouldCopy:(char)arg1 error:(id *)arg2;
- (void)setOwnedIds:(struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)arg0;
- (void)setRelativeDataPath:(NSString *)arg0;
- (NSString *)relativeDataPath;
- (void)setClassType:(int)arg0;
- (int)classType;
- (void)dealloc;
- (long long)identifier;
- (TSPDistributableArchiveEntry *)initWithIdentifier:(long long)arg0;
- (char)isLoaded;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (void).cxx_destruct;
- (NSData *)dataRepresentation;

@end
