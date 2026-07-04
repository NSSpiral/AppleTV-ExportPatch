/* Runtime dump - BRFieldXattrBlob
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldXattrBlob : PBCodable <NSCopying>
{
    NSMutableArray * _xattrs;
}

@property (retain, nonatomic) NSMutableArray * xattrs;

+ (char)loadXattrsFromFD:(int)arg0 structuralBlob:(id *)arg1 contentBlob:(id *)arg2 withMaximumSize:(unsigned int)arg3 error:(id *)arg4;
+ (char)removeXattrsOnFD:(int)arg0 includingContentRelated:(char)arg1 error:(id *)arg2;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRFieldXattrBlob *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)applyToFileDescriptor:(int)arg0 error:(id *)arg1;
- (void)addXattrs:(id)arg0;
- (unsigned int)xattrsCount;
- (void)clearXattrs;
- (NSObject *)xattrsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)xattrs;
- (void)setXattrs:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
