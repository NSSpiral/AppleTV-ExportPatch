/* Runtime dump - MFIMAPFetchResult
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPFetchResult : NSObject
{
    int _itemType;
    unsigned long long _modSequenceNumber;
    id _typeSpecific;
}

- (void)dealloc;
- (NSString *)description;
- (PTSSection *)section;
- (int)type;
- (MFIMAPFetchResult *)initWithType:(int)arg0;
- (unsigned int)startOffset;
- (unsigned long)uid;
- (void)setStartOffset:(unsigned int)arg0;
- (void)setSection:(UITableViewSection *)arg0;
- (void)setUid:(unsigned long)arg0;
- (void)setFlagsArray:(NSArray *)arg0;
- (NSArray *)flagsArray;
- (UWLMessageWireEnvelope *)envelope;
- (id)bodyStructure;
- (void)setEnvelope:(UWLMessageWireEnvelope *)arg0;
- (NSDate *)internalDate;
- (void)setInternalDate:(NSDate *)arg0;
- (void)setFetchData:(NSData *)arg0;
- (void)setBodyStructure:(id)arg0;
- (void)setCustomFlagsArray:(NSArray *)arg0;
- (NSArray *)customFlagsArray;
- (unsigned long long)messageFlags;
- (void)setMessageFlags:(unsigned long long)arg0;
- (unsigned int)messageSize;
- (void)setMessageSize:(unsigned int)arg0;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg0;
- (unsigned long long)modSequenceNumber;
- (void)setModSequenceNumber:(unsigned long long)arg0;
- (NSData *)fetchData;
- (unsigned long)encoding;

@end
