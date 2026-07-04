/* Runtime dump - NoteObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteObject : NSManagedObject

@property (retain, nonatomic) NSNumber * externalFlags;
@property (retain, nonatomic) NSNumber * externalServerIntId;
@property (retain, nonatomic) NSNumber * deletedFlag;
@property (retain, nonatomic) NSNumber * externalSequenceNumber;
@property (retain, nonatomic) NSString * summary;
@property (retain, nonatomic) NSString * author;
@property (retain, nonatomic) NSDate * modificationDate;
@property (retain, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSNumber * contentType;
@property (retain, nonatomic) NSNumber * containsCJK;
@property (retain, nonatomic) NoteBodyObject * body;
@property (retain, nonatomic) NSSet * attachments;
@property (retain, nonatomic) NoteStoreObject * store;
@property (retain, nonatomic) NSNumber * integerId;
@property (retain, nonatomic) NSString * content;
@property (readonly, nonatomic) NSString * contentAsPlainText;
@property (nonatomic) char isPlainText;
@property (readonly, nonatomic) NSURL * noteId;
@property (readonly, nonatomic) char isMarkedForDeletion;
@property (readonly, nonatomic) char isBeingMarkedForDeletion;
@property (retain, nonatomic) NSNumber * isBookkeepingEntry;
@property (retain, nonatomic) NSString * serverId;
@property (readonly, nonatomic) char hasValidServerIntId;
@property (nonatomic) long long serverIntId;
@property (readonly, retain, nonatomic) NSString * guid;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSData * externalRepresentation;
@property (retain, nonatomic) NSString * externalContentRef;
@property (nonatomic) unsigned long long sequenceNumber;

- (void)setFlags:(unsigned long long)arg0;
- (NSString *)content;
- (NSData *)externalRepresentation;
- (char)isPlainText;
- (NSString *)contentAsPlainText;
- (void)setExternalRepresentation:(NSData *)arg0;
- (unsigned long long)flags;
- (void)setSequenceNumber:(unsigned long long)arg0;
- (unsigned long long)sequenceNumber;
- (void)setIsPlainText:(char)arg0;
- (void)markForDeletion;
- (char)isMarkedForDeletion;
- (long long)serverIntId;
- (id)contentAsPlainTextPreservingNewlines;
- (NSString *)externalContentRef;
- (void)setExternalContentRef:(NSString *)arg0;
- (char)isBeingMarkedForDeletion;
- (NSURL *)noteId;
- (void)setServerIntId:(long long)arg0;
- (char)hasValidServerIntId;
- (char)belongsToCollection:(id)arg0;
- (void)setContent:(NSString *)arg0;
- (char)containsAttachments;

@end
