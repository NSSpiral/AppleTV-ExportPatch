/* Runtime dump - NoteBodyObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteBodyObject : NSManagedObject

@property (retain, nonatomic) NSString * content;
@property (readonly, nonatomic) NSString * contentAsPlainText;
@property (retain, nonatomic) NoteObject * owner;
@property (retain, nonatomic) NSData * externalRepresentation;
@property (retain, nonatomic) NSString * externalContentRef;

- (NSString *)contentAsPlainText;
- (id)contentAsPlainTextPreservingNewlines;

@end
