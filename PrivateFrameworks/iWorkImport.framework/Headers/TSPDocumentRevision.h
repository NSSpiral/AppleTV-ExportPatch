/* Runtime dump - TSPDocumentRevision
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentRevision : NSObject <NSCopying>
{
    int _sequence;
    NSString * _identifier;
}

@property (readonly, nonatomic) int sequence;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * revisionString;

+ (NSURL *)documentRevisionAtURL:(NSURL *)arg0 passphrase:(NSString *)arg1 error:(id *)arg2;
+ (TSPDocumentRevision *)revisionWithSequence:(int)arg0 identifier:(NSString *)arg1;
+ (NSString *)revisionWithRevisionString:(NSString *)arg0;

- (TSPDocumentRevision *)initWithSequence:(int)arg0 identifier:(NSString *)arg1;
- (NSString *)nextRevisionWithIdentifier:(NSString *)arg0;
- (TSPDocumentRevision *)initWithRevisionString:(NSString *)arg0;
- (NSString *)revisionString;
- (int)compareSequenceFromRevision:(id)arg0;
- (int)sequence;
- (TSPDocumentRevision *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (TSPDocumentRevision *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
