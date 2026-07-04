/* Runtime dump - CAMTimelapseDiskUtilities
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseDiskUtilities : NSObject

+ (NSObject *)readSortedStatesFromDiskMergeSecondaryState:(char)arg0;
+ (CAMTimelapseDiskUtilities *)readStateForTimelapseUUID:(id)arg0 mergeSecondaryState:(char)arg1;
+ (CAMTimelapseDiskUtilities *)timelapseUUIDsOnDisk;
+ (CAMTimelapseDiskUtilities *)updateSecondaryStateForTimelapseUUID:(id)arg0 forStateReadSuccessfully:(char)arg1;
+ (NSString *)timelapseDirectoryPath;
+ (CAMTimelapseDiskUtilities *)updateSecondaryStateForTimelapseUUID:(id)arg0 withStopReasons:(int)arg1 stopTime:(NSDate *)arg2;
+ (char)writeStateToDisk:(id)arg0 createDirectoryIfNeeded:(char)arg1;
+ (CAMTimelapseDiskUtilities *)readFrameFilePathsForTimelapseUUID:(id)arg0;
+ (NSDictionary *)sortedArrayFromFilePathDictionary:(NSDictionary *)arg0 reverse:(char)arg1;
+ (CAMTimelapseDiskUtilities *)directoryPathForTimelapseUUID:(id)arg0;
+ (CAMTimelapseDiskUtilities *)readSecondaryStateForTimelapseUUID:(id)arg0;
+ (char)removeDummyFileForTimelapseUUID:(id)arg0;
+ (CAMTimelapseDiskUtilities *)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg0;
+ (char)reserveDummyFileForTimelapseUUID:(id)arg0 width:(int)arg1 height:(int)arg2;
+ (NSObject *)fileNameForImageFrameIndex:(int)arg0;
+ (char)hasPendingWork;
+ (CAMTimelapseDiskUtilities *)timelapseDirectoryPathCreateIfNeeded:(char)arg0;
+ (NSString *)stateFileName;
+ (CAMTimelapseDiskUtilities *)stateFilePathForTimelapseUUID:(id)arg0;
+ (NSString *)secondaryStateFileName;
+ (CAMTimelapseDiskUtilities *)secondaryStateFilePathForTimelapseUUID:(id)arg0;
+ (char)writeSecondaryStateToDisk:(id)arg0 forTimelapseUUID:(id)arg1;
+ (int)frameIndexFromImageFileName:(NSString *)arg0;
+ (NSString *)dummyFileName;
+ (CAMTimelapseDiskUtilities *)dummyFilePathForTimelapseUUID:(id)arg0;

@end
