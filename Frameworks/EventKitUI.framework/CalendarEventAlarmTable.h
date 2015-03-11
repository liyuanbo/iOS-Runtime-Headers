/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <CalendarEventAlarmTableDelegate>, <EKStyleProvider>, NSIndexPath, NSString;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {
    long long _alarmIdentifier;
    <CalendarEventAlarmTableDelegate> *_alarmTableDelegate;
    NSString *_customString;
    NSIndexPath *_selectedItem;
    <EKStyleProvider> *_styleProvider;
    bool_customSelected;
    bool_eventHasTravelTime;
    bool_immediateAlarmCreation;
    bool_leaveNowAlarmSelected;
    bool_shouldAllowAlarmsTriggeringAfterStartDate;
    bool_shouldShowLeaveNowOption;
    bool_useAllDayAlarms;
}

@property <CalendarEventAlarmTableDelegate> * alarmTableDelegate;
@property bool customSelected;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool eventHasTravelTime;
@property(readonly) unsigned long long hash;
@property bool leaveNowAlarmSelected;
@property bool shouldAllowAlarmsTriggeringAfterStartDate;
@property bool shouldShowLeaveNowOption;
@property(retain) <EKStyleProvider> * styleProvider;
@property(readonly) Class superclass;
@property bool useAllDayAlarms;

- (void).cxx_destruct;
- (id)_indexPathForPresetIdentifier:(long long)arg1;
- (long long)_presetIdentifierForRow:(long long)arg1;
- (void)_selectIndexPath:(id)arg1;
- (id)alarmTableDelegate;
- (unsigned long long)countOfPresets;
- (bool)customSelected;
- (bool)eventHasTravelTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)intervalForPresetIdentifier:(long long)arg1;
- (bool)leaveNowAlarmSelected;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)presetIdentifier;
- (long long)presetIdentifierAtIndex:(unsigned long long)arg1;
- (void)setAlarmTableDelegate:(id)arg1;
- (void)setCustomSelected:(bool)arg1;
- (void)setCustomString:(id)arg1;
- (void)setEventHasTravelTime:(bool)arg1;
- (void)setLeaveNowAlarmSelected:(bool)arg1;
- (void)setPresetIdentifier:(long long)arg1;
- (void)setShouldAllowAlarmsTriggeringAfterStartDate:(bool)arg1;
- (void)setShouldShowLeaveNowOption:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUseAllDayAlarms:(bool)arg1;
- (bool)shouldAllowAlarmsTriggeringAfterStartDate;
- (bool)shouldShowLeaveNowOption;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (bool)useAllDayAlarms;

@end