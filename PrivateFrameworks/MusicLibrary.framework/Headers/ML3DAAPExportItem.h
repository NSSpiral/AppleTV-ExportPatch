/* Runtime dump - ML3DAAPExportItem
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DAAPExportItem : ML3ExportItem

- (void *)valueForProperty:(unsigned int)arg0;
- (NSData *)exportData;
- (int)longValueForProperty:(unsigned int)arg0;
- (long long)longlongValueForProperty:(unsigned int)arg0;
- (int)_daapMediaKindForMLMediaType:(int)arg0;
- (int)_daapSortTypeForTrackOrder:(unsigned long)arg0;
- (int)_daapPlaylistKind;
- (unsigned int)_daapCodeForPropertyKey:(unsigned int)arg0;

@end
