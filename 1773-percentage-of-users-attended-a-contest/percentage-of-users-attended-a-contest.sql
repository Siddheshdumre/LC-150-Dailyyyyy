WITH total AS (
  SELECT COUNT(*) AS total_users
  FROM Users
)
SELECT
  r.contest_id,
  ROUND(COUNT(DISTINCT r.user_id) * 100.0 / t.total_users, 2) AS percentage
FROM Register AS r
CROSS JOIN total AS t
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;
