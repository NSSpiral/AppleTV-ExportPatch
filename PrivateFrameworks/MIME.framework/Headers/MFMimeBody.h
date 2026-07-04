/* Runtime dump - MFMimeBody
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeBody : MFMessageBody
{
    MFMimePart * _topLevelPart;
    id _preferredAlternative;
    id _numAlternatives;
}

+ (NSString *)versionString;
+ (MFMimeBody *)copyNewMimeBoundary;

- (int)numberOfAlternatives;
- (void)setPreferredAlternative:(int)arg0;
- (unsigned int)totalTextSize;
- (unsigned int)numberOfAttachmentsSigned:(char *)arg0 encrypted:(char *)arg1;
- (void)dealloc;
- (MFMimeBody *)init;
- (NSString *)mimeType;
- (NSSet *)attachments;
- (char)isRich;
- (id)preferredBodyPart;
- (int)preferredAlternative;
- (id)mimeSubtype;
- (id)firstPartPassingTest:(id /* block */)arg0;
- (void)setTopLevelPart:(MFMimePart *)arg0;
- (char)isHTML;
- (id)textHtmlPart;
- (MFMimePart *)topLevelPart;
- (NSSet *)attachmentURLs;
- (NSSet *)contentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1 asHTML:(char)arg2 isComplete:(char *)arg3;
- (NSNumber *)partWithNumber:(NSNumber *)arg0;

@end
